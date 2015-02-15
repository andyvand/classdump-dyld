/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet, NSDictionary;

@interface QLConfiguration : NSObject {

	NSSet* _siteWhileList;
	NSDictionary* _schemesMapping;

}
+(id)sharedConfiguration;
-(id)fakeSchemeForURL:(id)arg1 ;
-(char)allowWebPluginsForURL:(id)arg1 ;
-(SEL)selectorForURL:(id)arg1 forObject:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
