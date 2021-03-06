/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet;

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask {

	NSSet* _searchStrings;
	char _findAttendees;
	char _findUsers;
	char _findResources;
	char _findGroups;
	char _findLocations;
	unsigned long long _resultLimit;

}

@property (assign,nonatomic) char findAttendees;                          //@synthesize findAttendees=_findAttendees - In the implementation block
@property (assign,nonatomic) char findLocations;                          //@synthesize findLocations=_findLocations - In the implementation block
@property (assign) char findUsers;                                        //@synthesize findUsers=_findUsers - In the implementation block
@property (assign) char findGroups;                                       //@synthesize findGroups=_findGroups - In the implementation block
@property (assign) char findResources;                                    //@synthesize findResources=_findResources - In the implementation block
@property (assign,nonatomic) unsigned long long resultLimit;              //@synthesize resultLimit=_resultLimit - In the implementation block
@property (nonatomic,retain) NSSet * searchStrings;                       //@synthesize searchStrings=_searchStrings - In the implementation block
+(char)tokensAreLegal:(id)arg1 ;
-(void)setSearchStrings:(NSSet *)arg1 ;
-(NSSet *)searchStrings;
-(char)findAttendees;
-(char)findLocations;
-(char)findUsers;
-(char)findGroups;
-(char)findResources;
-(unsigned long long)resultLimit;
-(id)extraAttributes;
-(id)searchItems;
-(void)dealloc;
-(id)initWithSearchStrings:(id)arg1 atURL:(id)arg2 ;
-(void)setFindAttendees:(char)arg1 ;
-(void)setFindUsers:(char)arg1 ;
-(void)setFindGroups:(char)arg1 ;
-(void)setFindResources:(char)arg1 ;
-(void)setFindLocations:(char)arg1 ;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)httpMethod;
-(id)requestBody;
@end

