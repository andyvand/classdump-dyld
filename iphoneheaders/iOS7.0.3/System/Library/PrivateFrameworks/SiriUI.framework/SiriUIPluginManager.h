/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SVSBundleIdentifierMap;

@interface SiriUIPluginManager : NSObject {

	SVSBundleIdentifierMap* _identifierMap;

}
+(id)sharedInstance;
-(void)_loadBundleMapsIfNecessary;
-(id)_createDebugViewControllerForAceObject:(id)arg1 ;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2 ;
-(id)_bundleSearchPaths;
-(id)transcriptItemForObject:(id)arg1 ;
-(id)speakableProviderForObject:(id)arg1 ;
-(void).cxx_destruct;
@end
