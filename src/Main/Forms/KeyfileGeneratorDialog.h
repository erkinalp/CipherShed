/*
 Copyright (c) 2008 TrueCrypt Foundation. All rights reserved.

 Governed by the TrueCrypt License 2.8 the full text of which is contained
 in the file License.txt included in TrueCrypt binary and source code
 distribution packages.
*/

#ifndef TC_HEADER_Main_Forms_KeyfileGeneratorDialog
#define TC_HEADER_Main_Forms_KeyfileGeneratorDialog

#include "Forms.h"
#include "Main/Main.h"

namespace TrueCrypt
{
	class KeyfileGeneratorDialog : public KeyfileGeneratorDialogBase
	{
	public:
		KeyfileGeneratorDialog (wxWindow* parent);
		~KeyfileGeneratorDialog ();

	protected:
		void OnGenerateButtonClick (wxCommandEvent& event);
		void OnHashSelected (wxCommandEvent& event);
		void OnMouseMotion (wxMouseEvent& event);
		void OnShowRandomPoolCheckBoxClicked (wxCommandEvent& event);
		void ShowBytes (wxStaticText *textCtrl, const ConstBufferPtr &buffer, bool appendDots = true);
		
		HashList Hashes;
	};
}

#endif // TC_HEADER_Main_Forms_KeyfileGeneratorDialog