module(..., package.seeall)

--~		Play中统一处理的参数（主要是开射门）
--~		1 ---> task, 2 ---> matchpos, 3---->kick, 4 ---->dir,
--~		5 ---->pre,  6 ---->kp,       7---->cp,   8 ---->flag
------------------------------------- 射门相关的skill ---------------------------------------
-- TODO
------------------------------------ 跑位相关的skill ---------------------------------------
--~ p为要走的点,d默认为射门朝向

---------
function getball()
	local ipos = ball.pos()
	local mexe, mpos = Getball{pos = ipos}
	return {mexe, mpos}
end

function gorush()
	local mexe, mpos = GoRush()
	return {mexe, mpos}
end

function goalieV1()
	local mexe, mpos = GoalieV1()
	return {mexe, mpos}
end



function goalie()
	local mexe, mpos = Goalie()
	return {mexe, mpos}
end
function touch()
	local ipos = pos.ourGoal()
	local mexe, mpos = Touch{pos = ipos}
	return {mexe, mpos}
end
function touchKick(p,ifInter)
	local ipos = p or pos.theirGoal()
	local idir = function(runner)
		return (ipos - player.pos(runner)):dir()
	end
	local mexe, mpos = Touch{pos = ipos, useInter = ifInter}
	return {mexe, mpos, kick.flat, idir, pre.low, cp.full, cp.full, flag.nothing}
end
function goSpeciPos(p, d, f, a) -- 2014-03-26 增加a(加速度参数)
	local idir
	local iflag
	if d ~= nil then
		idir = d
	else
		idir = dir.shoot()
	end

	if f ~= nil then
		iflag = f
	else
		iflag = 0
	end

	local mexe, mpos = SmartGoto{pos = p, dir = idir, flag = iflag, acc = a}
	return {mexe, mpos}
end

function goSimplePos(p, d, f)
	local idir
	if d ~= nil then
		idir = d
	else
		idir = dir.shoot()
	end

	if f ~= nil then
		iflag = f
	else
		iflag = 0
	end

	local mexe, mpos = SimpleGoto{pos = p, dir = idir, flag = iflag}
	return {mexe, mpos}
end

function runMultiPos(p, c, d, idir, a)
	if c == nil then
		c = false
	end

	if d == nil then
		d = 20
	end

	if idir == nil then
		idir = dir.shoot()
	end

	local mexe, mpos = RunMultiPos{ pos = p, close = c, dir = idir, flag = flag.not_avoid_our_vehicle, dist = d, acc = a}
	return {mexe, mpos}
end

--~ p为要走的点,d默认为射门朝向
function goCmuRush(p, d, a, f, r, v)
	local idir
	if d ~= nil then
		idir = d
	else
		idir = dir.shoot()
	end
	local mexe, mpos = GoCmuRush{pos = p, dir = idir, acc = a, flag = f,rec = r,vel = v}
	return {mexe, mpos}
end

function forcekick(p,d,chip,power)
	local ikick = chip and kick.chip or kick.flat
	local ipower = power and power or 8000
	local idir = d and d or dir.shoot()
	local mexe, mpos = GoCmuRush{pos = p, dir = idir, acc = a, flag = f,rec = r,vel = v}
	return {mexe, mpos, ikick, idir, pre.low, kp.specified(ipower), cp.full, flag.forcekick}
end

function shoot(p,d,chip,power)
	local ikick = chip and kick.chip or kick.flat
	local ipower = power and power or 8000
	local idir = d and d or dir.shoot()
	local mexe, mpos = GoCmuRush{pos = p, dir = idir, acc = a, flag = f,rec = r,vel = v}
	return {mexe, mpos, ikick, idir, pre.low, kp.specified(ipower), cp.full, flag.nothing}
end
------------------------------------ 防守相关的skill ---------------------------------------
-- TODO
----------------------------------------- 其他动作 --------------------------------------------

-- p为朝向，如果p传的是pos的话，不需要根据ball.antiY()进行反算
function goBackBall(p, d)
	local mexe, mpos = GoCmuRush{ pos = ball.backPos(p, d, 0), dir = ball.backDir(p), flag = flag.dodge_ball}
	return {mexe, mpos}
end

-- 带避车和避球
function goBackBallV2(p, d)
	local mexe, mpos = GoCmuRush{ pos = ball.backPos(p, d, 0), dir = ball.backDir(p), flag = bit:_or(flag.allow_dss,flag.dodge_ball)}
	return {mexe, mpos}
end

function stop()
	local mexe, mpos = Stop{}
	return {mexe, mpos}
end

function continue()
	return {["name"] = "continue"}
end

------------------------------------ 测试相关的skill ---------------------------------------

function openSpeed(vx, vy, vdir)
	local spdX = function()
		return vx
	end

	local spdY = function()
		return vy
	end
	
	local spdW = function()
		return vdir
	end

	local mexe, mpos = OpenSpeed{speedX = spdX, speedY = spdY, speedW = spdW}
	return {mexe, mpos}
end

function speed(vx, vy, vdir)
	local spdX = function()
		return vx
	end

	local spdY = function()
		return vy
	end
	
	local spdW = function()
		return vdir
	end

	local mexe, mpos = Speed{speedX = spdX, speedY = spdY, speedW = spdW}
	return {mexe, mpos}
end



















-- function getball(p,f)
-- 	local idir = function(runner)
-- 		local res = nil
-- 		res = player.toBallDir(runner)
-- 		return res	
-- 	end
-- 	local iflag = f or flag.our_ball_placement
-- 	local mexe, mpos = SimpleGoto{pos = p, dir = idir, flag = iflag}	
-- 	return {mexe, mpos}
-- end

function marking1(xmin,xmax,ymin,ymax)
	local num = 0
	local ourGoal = CGeoPoint:new_local(-param.pitchLength/2,0)

	local drawDebug = function ()
		local p1 = CGeoPoint:new_local(xmin,ymin)
		local p2 = CGeoPoint:new_local(xmin,ymax)
		local p3 = CGeoPoint:new_local(xmax,ymin)
		local p4 = CGeoPoint:new_local(xmax,ymax)
		debugEngine:gui_debug_line(p1,p2)
		debugEngine:gui_debug_line(p2,p4)
		debugEngine:gui_debug_line(p3,p4)
		debugEngine:gui_debug_line(p1,p3)
	end

	local checkNum = function()
		local between = function (a,min,max)
			if a > min and a < max then 
				return true
			else
				return false
			end
		end

		local num = -1
		for i=0,param.maxPlayer-1 do
			--debugEngine:gui_debug_msg(CGeoPoint:new_local(-1000,-200*(i-7)),i .. (enemy.valid(i) and "True" or "False"))
			if enemy.valid(i) and between(enemy.posX(i),xmin,xmax) and between(enemy.posY(i),ymin,ymax) then
				return i
			end
		end
		return num
	end

	local ipos = function ()
		drawDebug()
		local num = checkNum()
		local enemypos = enemy.pos(5)
		if num < 0 then
			enemypos = CGeoPoint:new_local((xmin + xmax)/2.0,(ymin + ymax)/2.0)
		end
		local l = (ourGoal - enemypos):mod() * 0.2
		res = enemypos + Utils.Polar2Vector(l,(ourGoal - enemypos):dir())
		return res
	end

	local idir = function (runner)
		local num = checkNum()
		local enemypos = enemy.pos(5)
		if num < 0 then
			enemypos = CGeoPoint:new_local((xmin + xmax)/2.0,(ymin + ymax)/2.0)
		end

		local res
		res = (enemypos - ourGoal):dir()
		return res
	end

	local mexe, mpos = GoCmuRush{pos = ipos, dir = idir, acc = a, flag = f,rec = r,vel = v}
	return {mexe, mpos, ikick, idir, pre.high, kp.specified(ipower), cp.full, iflag}
end

function marking(xmin,xmax,ymin,ymax)
	local num = 0
	local ourGoal = CGeoPoint:new_local(-param.pitchLength/2,0)

	local drawDebug = function ()
		local p1 = CGeoPoint:new_local(xmin,ymin)
		local p2 = CGeoPoint:new_local(xmin,ymax)
		local p3 = CGeoPoint:new_local(xmax,ymin)
		local p4 = CGeoPoint:new_local(xmax,ymax)
		debugEngine:gui_debug_line(p1,p2)
		debugEngine:gui_debug_line(p2,p4)
		debugEngine:gui_debug_line(p3,p4)
		debugEngine:gui_debug_line(p1,p3)
	end

	local checkNum = function()
		local between = function (a,min,max)
			if a > min and a < max then 
				return true
			else
				return false
			end
		end

		local num = -1
		for i=0,param.maxPlayer-1 do
			--debugEngine:gui_debug_msg(CGeoPoint:new_local(-1000,-200*(i-7)),i .. (enemy.valid(i) and "True" or "False"))
			if enemy.valid(i) and between(enemy.posX(i),xmin,xmax) and between(enemy.posY(i),ymin,ymax) then
				return i
			end
		end
		return num
	end

	local ipos = function ()
		drawDebug()
		local num = checkNum()
		local enemypos = enemy.pos(2)
		if num < 0 then
			enemypos = CGeoPoint:new_local((xmin + xmax)/2.0,(ymin + ymax)/2.0)
		end
		local l = (ourGoal - enemypos):mod() * 0.4
		res = enemypos + Utils.Polar2Vector(l,(ourGoal - enemypos):dir())
		return res
	end

	local idir = function (runner)
		local num = checkNum()
		local enemypos = enemy.pos(2)
		if num < 0 then
			enemypos = CGeoPoint:new_local((xmin + xmax)/2.0,(ymin + ymax)/2.0)
		end

		local res
		res = (enemypos - ourGoal):dir()
		return res
	end

	local mexe, mpos = GoCmuRush{pos = ipos, dir = idir, acc = a, flag = f,rec = r,vel = v}
	return {mexe, mpos, ikick, idir, pre.high, kp.specified(ipower), cp.full, iflag}
end








-- 门将的位置 v2.1 update by wqf
--------------------------------------------------------------------------
--2021/5/29
--1.修正了门将坐标默认位置错误的问题，源于num=-1。
--2.修正了视觉的误差带来门将位置的问题，可能存在交点计算带来的较大偏差导致门将位置错误。
--3.增加debugEngine用于分析点位是否正确。
--------------------------------------------------------------------------

gEnemyMsg = {
	-- 门将的位置（包括消失处理）
	goaliePos = CGeoPoint:new_local(-2900,0)
}

function GoalieP()
	local num = 0
	local checkNum = function()
		local num = -1
		for i=0,param.maxPlayer-1 do
			if enemy.valid(i) and (enemy.pos(i) - ball.pos()):mod() < 150 then
				return i
			end
		end
		return num
	end

	local ipos = function ()
		local res = nil
		local num = checkNum()
		-- if (math.abs(ball.velX()) > 200) then
		-- 	p = Utils.GetPoint(ball.pos(),ball.velDir(),CGeoPoint:new_local(-2900,2000),-math.pi/2)
		-- 	debugEngine:gui_debug_x(p,5)
		-- 	debugEngine:gui_debug_line(p,ball.pos(),4)
		-- elseif	(math.abs(ball.velX()) < 10 and enemy.posX(num) < 0) then
		-- 	p = Utils.GetPoint(enemy.pos(num),enemy.dir(num),CGeoPoint:new_local(-2900,2000),-math.pi/2)
		-- 	debugEngine:gui_debug_x(p,5)
		-- 	debugEngine:gui_debug_line(p,enemy.pos(num),4)
		-- else
		-- 	P = CGeoPoint:new_local(-2920,-ball.posY()/2000*350*ball.posX()/1500)
		-- end
		debugEngine:gui_debug_msg(CGeoPoint:new_local(0,2000),num,2)
		p = Utils.GetPoint(enemy.pos(num),enemy.dir(num),CGeoPoint:new_local(-2900,2000),-math.pi/2)
		debugEngine:gui_debug_x(gEnemyMsg.goaliePos,3)
		debugEngine:gui_debug_line(p,ball.pos(),4)

		--if(p:y() < 420 and p:y() > -420 and enemy.posX(num) > -2200 and math.abs(ball.vel():mod()) < 50) then
		if(p:y() < 380 and p:y() > -380 and enemy.posX(num) > -2400 ) then
			gEnemyMsg.goaliePos = p
			return gEnemyMsg.goaliePos
		--elseif(p:y() < 380 and p:y()>-380 and enemy.posX(num) > -2200 and math.abs(ball.velY()) > 100) then
			--p = p + Utils.Polar2Vector(100,ball.velDir())
			--gEnemyMsg.goaliePos = p
			--return p
		elseif (enemy.posX(num) < -2400 and enemy.posY(num) < 0 and num ~= -1) then
			return CGeoPoint:new_local(-2920,-360)
		elseif (enemy.posX(num) < -2400 and enemy.posY(num) > 0 and num ~= -1) then
			return CGeoPoint:new_local(-2920,360)
		-- elseif ball.velX() > 200 then
		-- 	return gEnemyMsg.goaliePos
		elseif (num == -1) then ---修改判断位
			gEnemyMsg.goaliePos = CGeoPoint:new_local(-2920,-ball.posY()/2000*350*ball.posX()/1500)
			return gEnemyMsg.goaliePos 
		else 
			return gEnemyMsg.goaliePos 
		end
	end

	local idir = function (runner)
		local res = nil
		res = (ball.pos() - player.pos(runner)):dir()
		if res > -math.pi/2 and res < math.pi/2 then
			return res
		else
			return 0
		end
	end
	local mexe, mpos = GoCmuRush{pos = ipos, dir = idir, acc = a, flag = f,rec = r,vel = v}
	return {mexe, mpos}
end
