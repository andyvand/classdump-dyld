/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Shortcut/Shortcut-Structs.h>
#import <Shortcut/SCTGRL.h>

@class NSMutableArray;

@interface SCTWindowGRL : SCTGRL {

	NSMutableArray* mWindowIdentifiers;
	char mPendingShowcase;

}
-(id)representativeIcon;
-(id)fullTitle;
-(void)resolveResourceAndInvoke:(id)arg1 ;
-(id)resolveFromContainer:(id)arg1 ;
-(void)enumerateDescendants:(id)arg1 ofResource:(id)arg2 ;
-(void)windowHidden:(id)arg1 ;
-(void)addWindowIdentifier:(id)arg1 ;
-(void)noteWindowClosed:(id)arg1 ;
-(char)containsWindowIdentifier:(id)arg1 ;
-(void)setCachedWindow:(id)arg1 ;
-(id)findMatchingWindowInWindowList;
-(id)initWithWindow:(id)arg1 withParent:(id)arg2 ;
-(id)windowIdentifiers;
-(void)setWindowIdentifiers:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)hide:(id)arg1 ;
-(void)perform;
-(void)show;
@end

