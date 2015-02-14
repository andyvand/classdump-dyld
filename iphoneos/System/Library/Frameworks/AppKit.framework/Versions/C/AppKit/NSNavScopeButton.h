/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSButton.h>

@class NSArray;

@interface NSNavScopeButton : NSButton {

	NSArray* _scopeLocations;

}
+(Class)cellClass;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setStringValue:(id)arg1 ;
-(void)setScopeLocations:(id)arg1 ;
-(id)scopeLocations;
-(void)setStateToSelected;
-(void)setStateToUnselected;
-(char)isSelected;
@end

