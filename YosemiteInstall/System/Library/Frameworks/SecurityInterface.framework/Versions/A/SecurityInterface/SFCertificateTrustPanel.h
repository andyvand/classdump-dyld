/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SecurityInterface/SecurityInterface-Structs.h>
#import <SecurityInterface/SFCertificatePanel.h>

@interface SFCertificateTrustPanel : SFCertificatePanel {

	id _reserved_SFCertificateTrustPanel;

}
+(id)sharedCertificateTrustPanel;
-(void)setRef:(id*)arg1 toObj:(id)arg2 ;
-(void)set_splitView:(id)arg1 ;
-(id)_defaultHelpAnchor;
-(void)_okClicked:(id)arg1 ;
-(void)_cancelClicked:(id)arg1 ;
-(id)_showCertButton;
-(id)_trustButton;
-(id)_aboveContentBox;
-(id)_discloseContentBox;
-(id)_belowContentBox;
-(id)_defaultMessage;
-(id)_defaultInformation;
-(void)setShowsCertButton:(char)arg1 ;
-(void)setCertificatesDisclosed:(char)arg1 ;
-(long long)_prepPanel:(SecTrustRef)arg1 message:(id)arg2 showGroup:(char)arg3 ;
-(void)_adjustHelpDependentButtons;
-(void)setDefaultInformation:(id)arg1 ;
-(char)certificatesDisclosed;
-(char)showsCertButton;
-(char)showsTrustButton;
-(id)_reserved_SFCertificateTrustPanel;
-(void)set_iconView:(id)arg1 ;
-(void)set_messageField:(id)arg1 ;
-(void)set_informationField:(id)arg1 ;
-(void)set_showCertButton:(id)arg1 ;
-(void)set_trustButton:(id)arg1 ;
-(void)set_aboveContentBox:(id)arg1 ;
-(void)set_discloseContentBox:(id)arg1 ;
-(void)set_belowContentBox:(id)arg1 ;
-(void)setDefaultMessage:(id)arg1 ;
-(void)_saveTrustValues;
-(void)_dismissModalLoop:(id)arg1 ;
-(void)_discloseCertificates:(char)arg1 ;
-(id)loadTrustNibFile;
-(void)_constructDefaultMessage:(SecTrustRef)arg1 ;
-(void)_adjustSplitView;
-(void)_sizeToFitTextFields:(char)arg1 ;
-(void)_SFCertificateTrustPanel_disclosureStateChanged:(id)arg1 ;
-(char)_willAllowSpace:(int)arg1 ;
-(void)_resizeTopView:(int)arg1 ;
-(id)_truncatedAlwaysTrustCertString:(id)arg1 forHostOrEmail:(id)arg2 ;
-(void)_forceAdminTrust:(char)arg1 ;
-(void)_trustClicked:(id)arg1 ;
-(void)_discloseClicked:(id)arg1 ;
-(void)_certTrustSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)beginSheetForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 trust:(SecTrustRef)arg5 message:(id)arg6 ;
-(void)setShowsTrustButton:(char)arg1 ;
-(long long)runModalForTrust:(SecTrustRef)arg1 message:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)setInformativeText:(id)arg1 ;
-(void)setShowsHelp:(char)arg1 ;
-(id)informativeText;
-(id)_messageField;
-(id)_informationField;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)windowDidResize:(id)arg1 ;
-(id)_splitView;
-(id)_iconView;
@end
