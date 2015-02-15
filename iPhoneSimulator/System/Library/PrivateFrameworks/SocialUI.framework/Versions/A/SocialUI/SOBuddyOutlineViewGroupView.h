/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:18 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <SocialUI/SOBuddyOutlineViewBaseRowView.h>

@class NSTextField;

@interface SOBuddyOutlineViewGroupView : SOBuddyOutlineViewBaseRowView {

	NSTextField* _buddyCountLabel;

}

@property (retain) NSTextField * buddyCountLabel;              //@synthesize buddyCountLabel=_buddyCountLabel - In the implementation block
+(id)defaultAttributes;
+(id)highlightedAttributes;
-(NSTextField *)buddyCountLabel;
-(void)setBuddyCountLabel:(NSTextField *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

