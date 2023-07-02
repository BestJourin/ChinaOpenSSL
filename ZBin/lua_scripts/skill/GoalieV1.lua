function GoalieV1(task)
	matchPos = function()
		return pos.ourGoal()
	end

	execute = function(runner)
		--debugEngine:gui_debug_msg(CGeoPoint:new_local(0,0),runner)
		if runner >=0 and runner < param.maxPlayer then
			if mrole ~= "" then
				CRegisterRole(runner, "goalie")
			end
		else
			print("Error runner in GoalieV1", runner)
		end

		return CGoalieV1(runner)
	end

	return execute, matchPos
end

gSkillTable.CreateSkill{
	name = "GoalieV1",
	execute = function (self)
		print("This is in skill"..self.name)
	end
}