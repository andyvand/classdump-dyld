/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Shortcut/Shortcut-Structs.h>
@class NSMutableArray;

@interface SCTCarbonMenu : NSObject {

	NSMutableArray* mMenuPath;

}
+(int)closeShowcasedMenu:(id)arg1 ;
+(void)showcaseMenu:(id)arg1 andShiftFocus:(char)arg2 ;
-(id)menuTitlePath;
-(id)leafItem;
-(id)initWithMenu:(OpaqueMenuRefRef)arg1 item:(unsigned short)arg2 withParentMenu:(id)arg3 ;
-(void)showAndShiftFocus;
-(id)menuPath;
-(int)closeMenuToIntersectionWithNewMenu:(id)arg1 ;
-(void)openMenuFromDepth:(int)arg1 shiftFocus:(char)arg2 ;
-(void)validateMenuPath;
-(void)dealloc;
-(id)description;
-(void)hide:(id)arg1 ;
-(void)show;
@end

