/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Shortcut/Shortcut-Structs.h>
#import <Shortcut/SCTGRL.h>

@class NSString;

@interface SCTAccessibilityGRL : SCTGRL {

	NSString* mRole;
	NSString* mSubrole;

}
-(id)fullTitle;
-(void)resolveResourceAndInvoke:(id)arg1 ;
-(id)resolveFromContainer:(id)arg1 ;
-(void)enumerateDescendants:(id)arg1 ofResource:(id)arg2 ;
-(void)doFinishShow;
-(void)extractElementPath:(AXUIElementRef)arg1 ;
-(id)initWithElement:(AXUIElementRef)arg1 withParent:(id)arg2 ;
-(id)initWithRootAttribute:(CFStringRef)arg1 ;
-(char)isWindow;
-(void)delayedShowcase:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)hide:(id)arg1 ;
-(void)perform;
-(void)show;
@end

