function Getball(task)
	local mpos
	matchPos = function()
		return ball.pos()
	end

	execute = function(runner)
		if runner >=0 and runner < param.maxPlayer then
			if mrole ~= "" then
				CRegisterRole(runner, runner)
			end
		else
			print("Error runner in Getball", runner)
		end
		return CGetball(runner)
	end

	return execute, matchPos
end

gSkillTable.CreateSkill{
	name = "Getball",
	execute = function (self)
		print("This is in skill"..self.name)
	end
}