/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CNAutocompleteResult : NSObject {

	NSString* _displayName;
	id _address;
	unsigned long long _addressType;
	char _hasPreferredDomain;
	char _hasPrefixMatch;
	unsigned long long _sourceType;
	char _hasExactMatch;

}

@property (copy) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (copy,readonly) id address;                             //@synthesize address=_address - In the implementation block
@property (readonly) unsigned long long addressType;              //@synthesize addressType=_addressType - In the implementation block
@property (assign) unsigned long long sourceType;                 //@synthesize sourceType=_sourceType - In the implementation block
@property (assign) char hasPreferredDomain;                       //@synthesize hasPreferredDomain=_hasPreferredDomain - In the implementation block
@property (assign) char hasExactMatch;                            //@synthesize hasExactMatch=_hasExactMatch - In the implementation block
+(id)resultWithDisplayName:(id)arg1 address:(id)arg2 addressType:(int)arg3 ;
+(id)comparators;
+(int)resultType;
-(unsigned long long)sourceType;
-(id)stringForHashing;
-(id)nameForHashing;
-(char)displayNameExactlyMatchesSearchTerm:(id)arg1 ;
-(char)addressExactlyMatchesSearchTerm:(id)arg1 ;
-(char)hasExactMatchForTerm:(id)arg1 ;
-(void)updateUsingInformationFromRelatedResult:(id)arg1 ;
-(char)hasPreferredDomain;
-(void)setHasPreferredDomain:(char)arg1 ;
-(char)hasExactMatch;
-(void)setHasExactMatch:(char)arg1 ;
-(void)setSourceType:(unsigned long long)arg1 ;
-(unsigned long long)addressType;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)address;
@end

