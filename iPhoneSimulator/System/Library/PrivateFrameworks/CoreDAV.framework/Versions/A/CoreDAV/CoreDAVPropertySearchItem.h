/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSString;

@interface CoreDAVPropertySearchItem : CoreDAVItem {

	CoreDAVLeafItem* _prop;
	NSString* _match;
	NSString* _matchTypeAttribute;

}

@property (nonatomic,retain) CoreDAVLeafItem * prop;                     //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) NSString * match;                           //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) NSString * matchTypeAttribute;              //@synthesize matchTypeAttribute=_matchTypeAttribute - In the implementation block
-(int)wellKnownPrincipalSearchType;
-(NSString *)match;
-(void)write:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setMatchTypeAttribute:(NSString *)arg1 ;
-(void)setMatch:(NSString *)arg1 ;
-(CoreDAVLeafItem *)prop;
-(void)setProp:(CoreDAVLeafItem *)arg1 ;
-(NSString *)matchTypeAttribute;
-(id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2 ;
@end

