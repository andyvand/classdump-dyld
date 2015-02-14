/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ContinuousReadingListPageItem.h>

@class WBSAutomaticReadingListItem;

@interface ContinuousAutomaticReadingListPage : ContinuousReadingListPageItem {

	WBSAutomaticReadingListItem* _automaticReadingListItem;

}

@property (nonatomic,readonly) WBSAutomaticReadingListItem * automaticReadingListItem;              //@synthesize automaticReadingListItem=_automaticReadingListItem - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(char)isRepostedByAuthenticatedUser;
-(id)urlString;
-(id)initWithAutomaticReadingListItem:(id)arg1 ;
-(WBSAutomaticReadingListItem *)automaticReadingListItem;
-(id)reposterDisplayName;
-(id)reposterScreenName;
-(id)representedReadingListItem;
-(id)itemDescription;
-(id)secondaryIcon;
-(char)hasDefaultSiteIcon;
-(char)isSocial;
-(id)screenName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)title;
-(id)icon;
@end

