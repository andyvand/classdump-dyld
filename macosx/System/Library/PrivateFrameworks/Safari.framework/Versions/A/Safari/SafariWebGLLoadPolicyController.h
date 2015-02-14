/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSMutableDictionary;

@interface SafariWebGLLoadPolicyController : NSObject {

	NSMutableDictionary* _policies;
	HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSString> > >* _browserContentViewControllerToPageHost;
	char _changingPoliciesPerSitePreventedByAdmin;
	int _userDefaultWebGLLoadPolicy;
	char _firstVisitPolicyIsManagedByAdmin;
	int _defaultWebGLPolicy;
	int _hardwareSecurityLevel;

}

@property (assign,nonatomic) int defaultWebGLPolicy;                             //@synthesize defaultWebGLPolicy=_defaultWebGLPolicy - In the implementation block
@property (assign,nonatomic) int hardwareSecurityLevel;                          //@synthesize hardwareSecurityLevel=_hardwareSecurityLevel - In the implementation block
@property (assign,nonatomic) char firstVisitPolicyIsManagedByAdmin;              //@synthesize firstVisitPolicyIsManagedByAdmin=_firstVisitPolicyIsManagedByAdmin - In the implementation block
+(id)sharedController;
-(void)browserContentViewController:(BrowserContentViewController*)arg1 didLeavePageRunningWebGLWithHost:(id)arg2 ;
-(unsigned)webGLLoadPolicyForHost:(id)arg1 ;
-(void)browserContentViewController:(BrowserContentViewController*)arg1 didOpenPageRunningWebGLWithHost:(id)arg2 ;
-(char)showWebGLLoadPolicyDialogForURL:(id)arg1 inBrowserContentViewController:(BrowserContentViewController*)arg2 ;
-(void)clearWebGLPolicies;
-(void)clearWebGLPoliciesAddedAfterDate:(id)arg1 ;
-(void)reloadWebGLLoadPoliciesIfNeeded;
-(void)removeWebGLLoadPoliciesForHosts:(id)arg1 ;
-(void)saveWebGLLoadPoliciesToUserDefaults;
-(void)setDefaultWebGLPolicy:(int)arg1 ;
-(id)sortedPolicies;
-(int)hardwareSecurityLevel;
-(char)firstVisitPolicyIsManagedByAdmin;
-(int)defaultWebGLPolicy;
-(id)policyEntryForHost:(id)arg1 ;
-(char)_isSuppressingDialog:(id)arg1 ;
-(void)setWebGLLoadPolicy:(int)arg1 forHost:(id)arg2 saveToUserDefaults:(char)arg3 ;
-(unsigned)_managedPolicyToWKPolicy:(int)arg1 ;
-(char)_openPageIsUsingPolicyForHost:(id)arg1 ;
-(void)_loadPoliciesFromUserDefaults:(char)arg1 ;
-(void)removeWebGLLoadPolicyForHost:(id)arg1 ;
-(void)resetWebGLLoadPolicies;
-(void)setHardwareSecurityLevel:(int)arg1 ;
-(void)setFirstVisitPolicyIsManagedByAdmin:(char)arg1 ;
@end

