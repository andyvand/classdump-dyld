/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVOptionsTaskDelegate.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>

@protocol CoreDAVAccountInfoProvider;
@class NSString, NSArray, NSMutableArray;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate> {

	NSString* _requiredComplianceClass;
	NSArray* _httpPorts;
	NSArray* _httpsPorts;
	NSString* _httpServiceString;
	NSString* _httpsServiceString;
	NSString* _wellKnownPath;
	NSArray* _potentialContextPaths;
	NSMutableArray* _discoveries;
	char _didReceiveAuthenticationError;
	char _shouldBailEarly;
	id<CoreDAVAccountInfoProvider> _discoveredAccountInfo;

}

@property (assign,nonatomic) id<CoreDAVDiscoveryTaskGroupDelegate> delegate; 
@property (assign,nonatomic) char didReceiveAuthenticationError;                                //@synthesize didReceiveAuthenticationError=_didReceiveAuthenticationError - In the implementation block
@property (assign,nonatomic) char shouldBailEarly;                                              //@synthesize shouldBailEarly=_shouldBailEarly - In the implementation block
@property (nonatomic,retain) id<CoreDAVAccountInfoProvider> discoveredAccountInfo;              //@synthesize discoveredAccountInfo=_discoveredAccountInfo - In the implementation block
@property (nonatomic,retain) NSString * wellKnownPath;                                          //@synthesize wellKnownPath=_wellKnownPath - In the implementation block
@property (nonatomic,retain) NSArray * potentialContextPaths;                                   //@synthesize potentialContextPaths=_potentialContextPaths - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)cancelTaskGroup;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)syncAway;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPath:(id)arg7 potentialContextPaths:(id)arg8 requiredComplianceClass:(id)arg9 ;
-(void)startSRVLookup:(id)arg1 serviceString:(id)arg2 ;
-(NSString *)wellKnownPath;
-(id)allDiscoveryPorts:(id)arg1 withScheme:(id)arg2 ;
-(void)startWellKnownLocationTask:(id)arg1 withURL:(id)arg2 ;
-(id)setupDiscoveries:(id)arg1 withSchemes:(id)arg2 ;
-(void)startPropfindTask:(id)arg1 ;
-(id)allDiscoveryPaths:(id)arg1 ;
-(NSArray *)potentialContextPaths;
-(void)completeDiscovery:(id)arg1 error:(id)arg2 ;
-(id)propFindProperties;
-(void)startWellKnownFallbackHeadTask:(id)arg1 withURL:(id)arg2 ;
-(void)noteDefinitiveAuthFailureFromTask:(id)arg1 ;
-(void)propFindTaskFinished:(id)arg1 ;
-(id)extractPrincipalURLFromPropFindTask:(id)arg1 error:(id*)arg2 ;
-(void)srvLookupTask:(id)arg1 error:(id)arg2 ;
-(void)setDidReceiveAuthenticationError:(char)arg1 ;
-(void)completeOptionsTask:(id)arg1 error:(id)arg2 ;
-(void)startOptionsTask:(id)arg1 ;
-(void)getDiscoveryStatus:(id)arg1 priorFailed:(id*)arg2 subsequentFailed:(id*)arg3 priorIncomplete:(id*)arg4 subsequentIncomplete:(id*)arg5 priorSuccess:(id*)arg6 subsequentSuccess:(id*)arg7 ;
-(char)shouldBailEarly;
-(void)setDiscoveredAccountInfo:(id<CoreDAVAccountInfoProvider>)arg1 ;
-(id<CoreDAVAccountInfoProvider>)discoveredAccountInfo;
-(void)setShouldBailEarly:(char)arg1 ;
-(void)addToDiscoveryArray:(id*)arg1 discovery:(id)arg2 ;
-(void)optionsTask:(id)arg1 error:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPaths:(id)arg7 requiredComplianceClass:(id)arg8 ;
-(id)cleanedStringsFromResponseHeaders:(id)arg1 forHeader:(id)arg2 ;
-(char)didReceiveAuthenticationError;
-(void)setWellKnownPath:(NSString *)arg1 ;
-(void)setPotentialContextPaths:(NSArray *)arg1 ;
@end

