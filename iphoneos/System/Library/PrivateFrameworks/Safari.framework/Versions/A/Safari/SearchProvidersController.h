/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class SearchProvider, NSArray, NSMutableDictionary;

@interface SearchProvidersController : NSObject {

	SearchProvider* _defaultProvider;
	NSArray* _providers;
	NSMutableDictionary* _providersNotAllowedToPromptToBeMadeDefault;

}

@property (nonatomic,retain) SearchProvider * defaultProvider; 
@property (nonatomic,readonly) NSArray * providerList; 
+(URLRequest*)redirectToSafeSearchIfNeeded:(const URLRequest*)arg1 ;
+(id)_internetServicesRegion;
+(id)_countrySetInMacBuddy;
+(void)_sortSearchProviders:(id)arg1 ;
+(void)_getSortedSearchProviderList:(id*)arg1 andDefaultProvider:(id*)arg2 fromProviderList:(id)arg3 ;
+(id)sharedController;
-(SearchProvider *)defaultProvider;
-(id)providerFromScriptingName:(id)arg1 ;
-(char)searchProviderAllowedToPromptToBeMadeDefault:(id)arg1 ;
-(void)setDefaultProvider:(SearchProvider *)arg1 ;
-(void)doNotAllowSearchProviderToPromptToBeMadeDefault:(id)arg1 ;
-(void)removeAllPromptingPolicies;
-(void)removePromptingPoliciesAddedAfterDate:(id)arg1 beforeDate:(id)arg2 ;
-(NSArray *)providerList;
-(void)_loadAllProviders;
-(void)_loadProvidersNotAllowedToPromptToBeMadeDefault;
-(void)_getProviders:(id*)arg1 newDefaultProvider:(id*)arg2 ;
-(void)_setDefaultProvider:(id)arg1 ;
-(id)providerDictionaryRepresentations;
-(void)_providersNotAllowedToPromptToBeMadeDefaultChanged;
-(void)_setSystemDefaultProvider:(id)arg1 ;
-(id)providerFromIdentifier:(id)arg1 ;
-(id)init;
@end

