/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem, CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem {

	CoreDAVItem* _prop;
	CoreDAVLeafItem* _descriptionItem;

}

@property (nonatomic,retain) CoreDAVItem * prop;                             //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * descriptionItem;              //@synthesize descriptionItem=_descriptionItem - In the implementation block
+(id)copyParseRules;
-(id)init;
-(void)dealloc;
-(id)description;
-(CoreDAVItem *)prop;
-(CoreDAVLeafItem *)descriptionItem;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(void)setDescriptionItem:(CoreDAVLeafItem *)arg1 ;
@end

