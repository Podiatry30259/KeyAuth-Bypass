namespace KeyAuth_Bypass
{
	/*
	
		KeyAuth, is a pasted auth which the owner sells subscriptions for a lot of money.
		A person who decided to leak their backend in 2020, told me to attack them for $.
	 
		This bypass has only one function hook, otherwise contact me for the method without hooking and the signature to get the class instance.
	*/

	/*
		Signature: 48 89 5C 24 18 57 48 83 EC 30 48 8B 05 ?? ?? ?? ?? 48 
		33 C4 48 89 44 24 28 48 8B FA 48 8B D9 48 89 54 24 20 48 8D 15 ?? ?? ?? ??
		48 8B CF E8 ?? ?? ?? ?? 4C 8D 40 08 33 C9 80 38 04 4C 0F 45 C1 41 0F B6 00 
		88 83 30 02 00 00 48 8D 15 ?? ?? ?? ?? 48 8B CF E8 ?? ?? ?? ?? 48 8B D0 48
		8D 8B 38 02 00 00 E8 ?? ?? ?? ?? 90 48 8D 4F 08 0F B6 17 E8 ?? ?? ?? ?? 48 
		8B 4C 24 28 48 33 CC E8 ?? ?? ?? ?? 48 8B 5C 24 50 48 83 C4 30 5F C3
	*/

	void load_response_data(__int64 a1, unsigned __int8 *a2)
	{
		/*
		* Decrypted SkCrypt
		* 
		* Get the targeted loaders Build time
		* Insert the SkCrypt header in your DLL and then change those times to the Loader's build time.
		* 
		* Use SkCrypt's decrypt() function to get the original string
		*/
		{
			std::string name = 
				*reinterpret_cast<std::string*>(a1);
			std::string ownerid = 
				*reinterpret_cast<std::string*>(a1 + 0x20);
			std::string secret = 
				*reinterpret_cast<std::string*>(a1 + 0x40);
			std::string version = 
				*reinterpret_cast<std::string*>(a1 + 0x60);
			std::string url = 
				*reinterpret_cast<std::string*>(a1 + 0x80);
		}

		*reinterpret_cast<bool*>(a1 + 560) = true;
	}
}
