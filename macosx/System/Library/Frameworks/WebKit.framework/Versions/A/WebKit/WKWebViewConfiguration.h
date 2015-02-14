/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/NSCopying.h>

@class WKWebView, NSString, _WKVisitedLinkProvider, _WKWebsiteDataStore, WKProcessPool, WKPreferences, WKUserContentController;

@interface WKWebViewConfiguration : NSObject <NSCopying> {

	LazyInitialized<WKProcessPool>* _processPool;
	LazyInitialized<WKPreferences>* _preferences;
	LazyInitialized<WKUserContentController>* _userContentController;
	LazyInitialized<_WKVisitedLinkProvider>* _visitedLinkProvider;
	LazyInitialized<_WKWebsiteDataStore>* _websiteDataStore;
	WeakObjCPtr<WKWebView> _relatedWebView;
	WeakObjCPtr<WKWebView> _alternateWebViewForNavigationGestures;
	RetainPtr<NSString>* _groupIdentifier;
	char _suppressesIncrementalRendering;

}

@property (assign,setter=_setRelatedWebView:,nonatomic,__weak) WKWebView * _relatedWebView; 
@property (setter=_setGroupIdentifier:,nonatomic,copy) NSString * _groupIdentifier; 
@property (setter=_setVisitedLinkProvider:,nonatomic,retain) _WKVisitedLinkProvider * _visitedLinkProvider; 
@property (setter=_setWebsiteDataStore:,nonatomic,retain) _WKWebsiteDataStore * _websiteDataStore; 
@property (assign,setter=_setAlternateWebViewForNavigationGestures:,nonatomic,__weak) WKWebView * _alternateWebViewForNavigationGestures; 
@property (nonatomic,retain) WKProcessPool * processPool; 
@property (nonatomic,retain) WKPreferences * preferences; 
@property (nonatomic,retain) WKUserContentController * userContentController; 
@property (assign,nonatomic) char suppressesIncrementalRendering;                                                                                      //@synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering - In the implementation block
-(void)setSuppressesIncrementalRendering:(char)arg1 ;
-(void)setPreferences:(WKPreferences *)arg1 ;
-(void)_setRelatedWebView:(id)arg1 ;
-(WKWebView *)_relatedWebView;
-(WKProcessPool *)processPool;
-(void)setProcessPool:(WKProcessPool *)arg1 ;
-(WKUserContentController *)userContentController;
-(_WKVisitedLinkProvider *)_visitedLinkProvider;
-(_WKWebsiteDataStore *)_websiteDataStore;
-(NSString *)_groupIdentifier;
-(char)suppressesIncrementalRendering;
-(void)setUserContentController:(WKUserContentController *)arg1 ;
-(void)_setVisitedLinkProvider:(id)arg1 ;
-(void)_setWebsiteDataStore:(id)arg1 ;
-(void)_setAlternateWebViewForNavigationGestures:(id)arg1 ;
-(WKWebView *)_alternateWebViewForNavigationGestures;
-(void)_setGroupIdentifier:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WKPreferences *)preferences;
-(void)_validate;
@end

