/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:41:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface CRPluginManager : NSObject {

	NSString* _path;
	NSMutableDictionary* _addressHandlersByKind;

}
+(id)defaultPluginPath;
-(id)addressHandlerForAddressKind:(id)arg1 ;
-(void)_loadPlugins;
-(void)_loadPluginBundle:(id)arg1 ;
-(void)_addAddressHandler:(id)arg1 ;
-(id)addressHandlers;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end
