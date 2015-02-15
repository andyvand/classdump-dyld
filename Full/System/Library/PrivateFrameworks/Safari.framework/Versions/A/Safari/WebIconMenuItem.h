/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSMenuItem.h>

@class NSString;

@interface WebIconMenuItem : NSMenuItem {

	NSString* _URLString;

}
+(void)_iconDidChange:(id)arg1 ;
+(void)_allIconsRemoved:(id)arg1 ;
+(void)initialize;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 URLString:(id)arg4 ;
-(void)_startUpdatingIcon;
-(void)_stopUpdatingIcon;
-(void)_resetWebIcon;
-(void)setMenu:(id)arg1 ;
@end

