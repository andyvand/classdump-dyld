/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MailCore-Structs.h>
#import <MailCore/MCMessageHeaders.h>

@class NSMutableDictionary, NSMutableArray;

@interface MCMutableMessageHeaders : MCMessageHeaders {

	NSMutableDictionary* _headersAdded;
	NSMutableArray* _headersRemoved;

}
-(id)_headersForKey:(id)arg1 ;
-(id)_firstAddressForKey:(id)arg1 sender:(id)arg2 ;
-(id)_firstMessageIDForKey:(id)arg1 sender:(id)arg2 ;
-(void)addFromSpaceIfMissing;
-(void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(id)addressListForKey:(id)arg1 ;
-(id)allHeaderKeys;
-(id)messageIDListForKey:(id)arg1 ;
-(id)firstHeaderForKey:(id)arg1 ;
-(void)removeHeaderForKey:(id)arg1 ;
-(void)setHeader:(id)arg1 forKey:(id)arg2 ;
-(id)encodedHeadersIncludingFromSpace:(char)arg1 ;
-(void)setAddressList:(id)arg1 forKey:(id)arg2 ;
-(char)hasHeaderForKey:(id)arg1 ;
-(void)setMessageIDList:(id)arg1 forKey:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

