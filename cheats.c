void	Meds(void)
{
	if (is_pressed(0x00000001))
	{
		WRITEU32(offset + 0x0429600, 0x00FF2803);
		WRITEU32(offset + 0x0429604, 0x0000270F);
		offset = 0;
		data = 0;
	}
}

void	Water(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF2203);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Bling_Backpack(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF3B04);
}

void	Arctic_Jacket(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF3604);
}

void	Arctic_Trousers(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF3704);
}

void	Kevlar_Jacket(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF3304);
}

void	Kevlar_Trousers(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF3404);
}

void	Snowboard(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF4403);
}

void	Engine_Part(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF4303);
}

void	Minnow(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF4003);
}

void	Large_Fish(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF4103);
}

void	Pro_Fishing_Rod(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF1B03);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Bear_trap(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF1803);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Matches(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF1404);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Logs(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF3D04);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Tent(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF3C03);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Hunting_Knife(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0E03);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Shotgun_Ammo(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF1004);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Rifle_Ammo(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF1104);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Pistol_Ammo(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0F04);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Tranq_Ammo(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF1304);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Crossbow_Ammo(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF1204);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Cooked_Fish(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF4204);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Arctic_Hunting_Shotgun(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0603);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Hunting_Shotgun(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0503);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Hunting_Rifle(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0703);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Scout_Hunting_Rifle(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0803);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Tranq_Gun(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0D03);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Flare_Gun(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF4703);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Ray_Gun(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF4603);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Flamethrower(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF4503);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Double_Barrel_Shotgun(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0403);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Arctic_Hunting_Crossbow(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0C03);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Arctic_Hunting_Rifle(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0903);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Basic_Handgun(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0103);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Arctic_Handgun(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0203);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Arctic_Eagle_Handgun(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF0303);
	WRITEU32(offset + 0x0429608, 0x0000270F);
}

void	Fuel(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF1503);
	WRITEU32(offset + 0x0429604, 0x0000270F);
}

void	Trousers(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF2B03);
}

void	Jacket(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF2A03);
}

void	Backpack(void)
{
	WRITEU32(offset + 0x0429600, 0x00FF2C03);
}

