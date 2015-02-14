/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsAutocomplete/ContactsAutocomplete-Structs.h>
#import <ContactsAutocomplete/NSCopying.h>

@class NSString;

@interface CNAutocompleteFetchRequest : NSObject <NSCopying> {

	NSString* _searchString;
	NSString* _priorityDomainForSorting;
	unsigned long long _searchType;
	NSString* _sendingAddress;
	char _includeContacts;
	char _includeRecents;
	char _includeServers;

}

@property (copy) NSString * searchString;                          //@synthesize searchString=_searchString - In the implementation block
@property (copy) NSString * priorityDomainForSorting;              //@synthesize priorityDomainForSorting=_priorityDomainForSorting - In the implementation block
@property (assign) unsigned long long searchType;                  //@synthesize searchType=_searchType - In the implementation block
@property (copy) NSString * sendingAddress;                        //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (assign) char includeContacts;                           //@synthesize includeContacts=_includeContacts - In the implementation block
@property (assign) char includeRecents;                            //@synthesize includeRecents=_includeRecents - In the implementation block
@property (assign) char includeServers;                            //@synthesize includeServers=_includeServers - In the implementation block
+(id)request;
+(id)searchablePropertiesForSearchType:(unsigned long long)arg1 ;
-(void)setPriorityDomainForSorting:(NSString *)arg1 ;
-(void)setIncludeContacts:(char)arg1 ;
-(void)setIncludeRecents:(char)arg1 ;
-(unsigned long long)searchType;
-(void)setSearchType:(unsigned long long)arg1 ;
-(void)setIncludeServers:(char)arg1 ;
-(id)executeWithDelegate:(id)arg1 ;
-(NSString *)priorityDomainForSorting;
-(NSString *)sendingAddress;
-(void)setSendingAddress:(NSString *)arg1 ;
-(char)includeContacts;
-(char)includeRecents;
-(char)includeServers;
-(id)executeWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(id)includeDebugString;
-(id)searchTypeDebugString;
-(char)canExecute;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
@end

