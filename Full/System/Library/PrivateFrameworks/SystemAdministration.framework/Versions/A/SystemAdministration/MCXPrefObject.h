/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface MCXPrefObject : NSObject {

	NSMutableDictionary* mMCXDict;
	NSDictionary* mUnionPolicyKeys;

}
+(id)objectWithRAWDictionary:(id)arg1 ;
-(void)removeDictionaryForDomain:(id)arg1 ;
-(id)initWithRAWDictionary:(id)arg1 ;
-(void)setMCXRAWDict:(id)arg1 ;
-(void)setUnionPolicyKeys:(id)arg1 ;
-(void)removeDictionaryForDomains:(id)arg1 ;
-(id)dictionaryForDomain:(id)arg1 ;
-(void)setDictionary:(id)arg1 forDomain:(id)arg2 ;
-(char)hasSettingsForDomains:(id)arg1 ;
-(id)MCXRAWDict;
-(void)dealloc;
-(id)objectForKey:(id)arg1 inDomain:(id)arg2 ;
@end

