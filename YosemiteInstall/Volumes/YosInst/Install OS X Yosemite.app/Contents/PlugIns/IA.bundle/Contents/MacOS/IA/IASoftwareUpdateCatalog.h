/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:59:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSError;

@interface IASoftwareUpdateCatalog : NSObject {

	NSDictionary* _catalog;
	NSError* _error;

}
+(id)sharedCatalog;
-(void)_fetchCatalog;
-(void)startLoadingCatalog;
-(id)catalogAsPropertyList;
-(id)_softwareUpdateCatalogURL;
-(void)_finishedLoadingCatalog:(id)arg1 ;
-(id)overriddenCatalogURL;
-(void)dealloc;
-(id)error;
@end
