/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Shortcut/Shortcut-Structs.h>
@interface SCTMenuItem : NSObject {

	OpaqueMenuRefRef mMenu;
	unsigned short mItemIndex;

}
-(unsigned short)itemIndex;
-(id)initWithMenu:(OpaqueMenuRefRef)arg1 item:(unsigned short)arg2 ;
-(char)validateItem;
-(id)description;
-(char)isVisible;
-(OpaqueMenuRefRef)menu;
-(void)setMenu:(OpaqueMenuRefRef)arg1 ;
@end

