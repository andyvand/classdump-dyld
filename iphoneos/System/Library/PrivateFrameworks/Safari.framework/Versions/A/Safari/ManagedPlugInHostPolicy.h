/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ManagedPlugIn, NSString, NSDate;

@interface ManagedPlugInHostPolicy : NSObject {

	ManagedPlugIn* _plugIn;
	NSString* _hostname;
	NSString* _pageURL;
	NSDate* _lastVisitedDate;
	int _policy;
	char _runUnsandboxed;
	char _webPageIsOpen;
	char _policyIsManuallySetByUser;
	char _managedByAdmin;
	char _explicitlyCreatedByAdmin;

}

@property (assign,nonatomic,__weak) ManagedPlugIn * plugIn;                                                 //@synthesize plugIn=_plugIn - In the implementation block
@property (nonatomic,copy) NSString * hostname;                                                             //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * pageURL;                                                              //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy) NSDate * lastVisitedDate;                                                        //@synthesize lastVisitedDate=_lastVisitedDate - In the implementation block
@property (assign,nonatomic) int policy;                                                                    //@synthesize policy=_policy - In the implementation block
@property (assign,nonatomic) char runUnsandboxed;                                                           //@synthesize runUnsandboxed=_runUnsandboxed - In the implementation block
@property (assign,nonatomic) char webPageIsOpen;                                                            //@synthesize webPageIsOpen=_webPageIsOpen - In the implementation block
@property (assign,nonatomic) char policyIsManuallySetByUser;                                                //@synthesize policyIsManuallySetByUser=_policyIsManuallySetByUser - In the implementation block
@property (assign,getter=isManagedByAdmin,nonatomic) char managedByAdmin;                                   //@synthesize managedByAdmin=_managedByAdmin - In the implementation block
@property (assign,getter=wasExplicitlyCreatedByAdmin,nonatomic) char explicitlyCreatedByAdmin;              //@synthesize explicitlyCreatedByAdmin=_explicitlyCreatedByAdmin - In the implementation block
+(id)dictionaryRepresentationForManagedPlugInHostPolicy:(id)arg1 ;
+(id)stringFromPolicy:(int)arg1 ;
+(int)policyFromString:(id)arg1 ;
+(id)managedPlugInHostPolicyFromDictionaryRepresentation:(id)arg1 ;
+(int)policyFromLegacyString:(id)arg1 ;
+(id)managedPlugInHostPolicyFromLegacyDictionaryRepresentation:(id)arg1 ;
-(void)setHostname:(NSString *)arg1 ;
-(NSDate *)lastVisitedDate;
-(NSString *)hostname;
-(int)policy;
-(char)runUnsandboxed;
-(char)policyIsManuallySetByUser;
-(NSString *)pageURL;
-(char)isManagedByAdmin;
-(void)setPlugIn:(ManagedPlugIn *)arg1 ;
-(void)setPolicyIsManuallySetByUser:(char)arg1 ;
-(void)setPageURL:(NSString *)arg1 ;
-(void)setLastVisitedDate:(NSDate *)arg1 ;
-(void)setManagedByAdmin:(char)arg1 ;
-(void)setPolicy:(int)arg1 ;
-(void)setExplicitlyCreatedByAdmin:(char)arg1 ;
-(char)wasExplicitlyCreatedByAdmin;
-(void)setRunUnsandboxed:(char)arg1 ;
-(void)setWebPageIsOpen:(char)arg1 ;
-(char)webPageIsOpen;
-(char)isLocalFilePolicy;
-(id)iconForPageEmbeddingPlugIn;
-(id)hostnameForDisplay;
-(ManagedPlugIn *)plugIn;
@end

