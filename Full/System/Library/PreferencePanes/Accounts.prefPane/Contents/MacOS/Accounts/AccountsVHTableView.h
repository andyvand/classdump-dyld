/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Accounts.prefPane/Contents/MacOS/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <AppKit/NSOutlineView.h>

@interface AccountsVHTableView : NSOutlineView {

	char mContentEnabled;

}
-(id)accessibilityGroupsWithParent:(id)arg1 ;
-(id)accessibilitySelectedGroupAtRow:(unsigned long long)arg1 withParent:(id)arg2 ;
-(id)accessibilityHitTest:(CGPoint)arg1 parent:(id)arg2 ;
-(char)isContentEnabled;
-(id)accessibilityGroupWithDataSourceEntry:(id)arg1 dataSourceRow:(unsigned long long)arg2 outlineRow:(unsigned long long)arg3 withParent:(id)arg4 ;
-(void)setContentEnabled:(char)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)isEmpty;
-(char)acceptsFirstResponder;
-(CGRect)adjustScroll:(CGRect)arg1 ;
-(void)awakeFromNib;
-(CGRect)frameOfOutlineCellAtRow:(long long)arg1 ;
-(void)_highlightRow:(long long)arg1 clipRect:(CGRect)arg2 ;
-(void)_highlightColumn:(long long)arg1 clipRect:(CGRect)arg2 ;
@end
