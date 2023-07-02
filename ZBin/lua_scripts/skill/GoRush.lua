function GoRush(task)
	matchPos = function()
		return ball.pos()
	end

	execute = function(runner)
		--debugEngine:gui_debug_msg(CGeoPoint:new_local(0,0),runner)
		if runner >=0 and runner < param.maxPlayer then
			if mrole ~= "" then
				CRegisterRole(runner, runner)
			end
		else
			print("Error runner in GoRush", runner)
		end


		return CGoRush(runner)
	end

	return execute, matchPos
end

gSkillTable.CreateSkill{
	name = "GoRush",
	execute = function (self)
		print("This is in skill"..self.name)
	end
}