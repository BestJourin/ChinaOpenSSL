local f = flag.dribbling
local p = CGeoPoint:new_local(4500,0)
local p1 = CGeoPoint:new_local(-2300,2000)
local gopos = function ()
	return function ()
		local pos1 = CGeoPoint:new_local(-2850,ball.posY()*1000/4000)
		return pos1
	end
end

local idir = function ()
	return function ()
		local dir = player.toBallDir("Goalie")
		return dir
	end
end

--模仿shootgen，获取球员和球方向上的一个点
local goalp = function(dist)
	return function()
		local goalPos = player.pos("Leader")
		local pos  = ball.pos() + Utils.Polar2Vector(dist,(ball.pos() -  goalPos):dir())
		return pos
	end
end

gPlayTable.CreatePlay{

firstState = "t",
["t"] = {
	switch = function()

	end,
	--Defender = task.marking1(-3000,0,-2000,2000),
	--Middle = task.marking(-3000,0,-2000,2000),
	Goalie = task.goalieV1(),
	Middle = task.getball(),
	match = ""
},



name = "TestSkill",
applicable ={
	exp = "a",
	a = true
},
attribute = "attack",
timeout = 99999
}
