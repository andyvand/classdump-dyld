/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SCTMenuBarVisibilityManager : NSObject {

	id delegate;

}

@property (nonatomic,retain) id delegate; 
-(void)makeMenuBarVisible;
-(char)_load_HIMenuBarRequestVisibility;
-(void)_showMenuNow;
-(void)_showMenuFail;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_showMenu;
@end

