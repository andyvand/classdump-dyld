/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/Banner.h>

@class NSTextField;

@interface WebCrashBanner : Banner {

	NSTextField* _descriptionTextField;

}

@property (assign,nonatomic,__weak) NSTextField * descriptionTextField;              //@synthesize descriptionTextField=_descriptionTextField - In the implementation block
+(int)bannerSortOrder;
-(id)bannerNibName;
-(id)initWithContentViewController:(SearchableWebContentViewController*)arg1 ;
-(NSTextField *)descriptionTextField;
-(void)setDescriptionTextField:(NSTextField *)arg1 ;
-(void)awakeFromNib;
@end

