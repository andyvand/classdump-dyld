/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:31:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/VoiceOver Utility.app/Contents/MacOS/VoiceOver Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceOver Utility/PrefsBase.h>

@class NSPopUpButton;

@interface NavigationPrefs : PrefsBase {

	NSPopUpButton* _mouseCursorFollowsPopUp;
	NSPopUpButton* _fastSearchKeyPopUp;

}
-(void)_updateMouseCursorFollowsPopUp;
-(void)_updateFastSearchKey;
-(void)_showFastSearchInformationAlert;
-(void)fastSearchEnabled:(id)arg1 ;
-(void)selectFastSearchKey:(id)arg1 ;
-(void)selectMouseCursorFollows:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)helpAnchor;
-(void)awakeFromNib;
@end
