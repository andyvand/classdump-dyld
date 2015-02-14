/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableArray, CoreDAVLeafItem, NSMutableSet, CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVMatchResultsItem;

@interface CoreDAVResponseItem : CoreDAVItem {

	NSMutableArray* _hrefs;
	CoreDAVLeafItem* _status;
	NSMutableSet* _propStats;
	CoreDAVErrorItem* _errorItem;
	CoreDAVLeafItem* _responseDescription;
	CoreDAVItemWithHrefChildItem* _location;
	CoreDAVLeafItem* _serverUID;
	CoreDAVMatchResultsItem* _matchResults;

}

@property (nonatomic,retain) NSMutableArray * hrefs;                               //@synthesize hrefs=_hrefs - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableSet * propStats;                             //@synthesize propStats=_propStats - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * errorItem;                         //@synthesize errorItem=_errorItem - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * responseDescription;                //@synthesize responseDescription=_responseDescription - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * serverUID;                          //@synthesize serverUID=_serverUID - In the implementation block
@property (nonatomic,retain) CoreDAVMatchResultsItem * matchResults;               //@synthesize matchResults=_matchResults - In the implementation block
+(id)copyParseRules;
-(id)init;
-(void)dealloc;
-(id)description;
-(CoreDAVLeafItem *)status;
-(CoreDAVItemWithHrefChildItem *)location;
-(void)setLocation:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(void)setStatus:(CoreDAVLeafItem *)arg1 ;
-(id)successfulPropertiesToValues;
-(id)firstHref;
-(NSMutableArray *)hrefs;
-(CoreDAVLeafItem *)serverUID;
-(CoreDAVErrorItem *)errorItem;
-(NSMutableSet *)propStats;
-(CoreDAVLeafItem *)responseDescription;
-(CoreDAVMatchResultsItem *)matchResults;
-(void)addHref:(id)arg1 ;
-(void)addPropStat:(id)arg1 ;
-(void)setErrorItem:(CoreDAVErrorItem *)arg1 ;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(void)setServerUID:(CoreDAVLeafItem *)arg1 ;
-(void)setMatchResults:(CoreDAVMatchResultsItem *)arg1 ;
-(void)setPropStats:(NSMutableSet *)arg1 ;
-(void)setHrefs:(NSMutableArray *)arg1 ;
-(char)hasPropertyError;
@end

