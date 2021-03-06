/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDate;

@interface ADAccount : NSObject {

	NSString* _identifier;
	NSString* _label;
	NSString* _assistantIdentifier;
	NSString* _speechIdentifier;
	NSString* _hostname;
	NSString* _group;
	NSString* _predefinedServer;
	NSString* _aceHost;
	NSString* _localeIdentifier;
	NSString* _lastAssistantDataAnchor;
	NSMutableDictionary* _syncTimestamps;
	NSDate* _validationExpiration;
	char _needsDestruction;

}

@property (nonatomic,copy) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * assistantIdentifier;                  //@synthesize assistantIdentifier=_assistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * speechIdentifier;                     //@synthesize speechIdentifier=_speechIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostname;                             //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * group;                                //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSString * predefinedServer;                     //@synthesize predefinedServer=_predefinedServer - In the implementation block
@property (nonatomic,copy) NSString * aceHost;                              //@synthesize aceHost=_aceHost - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                     //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * lastAssistantDataAnchor;              //@synthesize lastAssistantDataAnchor=_lastAssistantDataAnchor - In the implementation block
@property (nonatomic,copy) NSDate * validationExpiration;                   //@synthesize validationExpiration=_validationExpiration - In the implementation block
@property (assign,nonatomic) char needsDestruction;                         //@synthesize needsDestruction=_needsDestruction - In the implementation block
+(id)accountForIdentifier:(id)arg1 ;
-(char)needsDestruction;
-(void)removeAndSave;
-(void)setNeedsDestruction:(char)arg1 ;
-(NSDate *)validationExpiration;
-(id)_keychainValueForKey:(id)arg1 ;
-(void)_setSyncTimestamps:(id)arg1 ;
-(void)setLastAssistantDataAnchor:(NSString *)arg1 ;
-(void)setValidationExpiration:(NSDate *)arg1 ;
-(id)_hostnameOverride;
-(id)_hostnameQAOverride;
-(char)_setKeychainValue:(id)arg1 forKey:(id)arg2 ;
-(char)_removeKeychainValueForKey:(id)arg1 ;
-(id)_infoDictionaryForPreferences;
-(char)setServerCertificateData:(id)arg1 ;
-(id)lastSyncDateForKey:(id)arg1 ;
-(void)setLastSyncDate:(id)arg1 forKey:(id)arg2 ;
-(id)serverCertificateData;
-(void)clearAssistantData;
-(NSString *)lastAssistantDataAnchor;
-(NSString *)group;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)hostname;
-(void)setAssistantIdentifier:(NSString *)arg1 ;
-(void)setSpeechIdentifier:(NSString *)arg1 ;
-(void)setPredefinedServer:(NSString *)arg1 ;
-(void)setAceHost:(NSString *)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(id)messageDictionary;
-(NSString *)assistantIdentifier;
-(NSString *)speechIdentifier;
-(NSString *)predefinedServer;
-(NSString *)aceHost;
-(id)validationData;
-(char)setValidationData:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)localeIdentifier;
-(NSString *)label;
-(void)setGroup:(NSString *)arg1 ;
-(void)save;
@end

