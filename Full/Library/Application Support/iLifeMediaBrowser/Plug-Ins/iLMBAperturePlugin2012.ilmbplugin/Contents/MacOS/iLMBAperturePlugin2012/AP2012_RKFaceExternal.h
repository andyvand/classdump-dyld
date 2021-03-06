/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBAperturePlugin2012.ilmbplugin/Contents/MacOS/iLMBAperturePlugin2012
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBAperturePlugin2012/AP2012_RKModel.h>

@class NSNumber, NSString, ILMB_APERTURE_2012_HgRecentChange;

@interface AP2012_RKFaceExternal : AP2012_RKModel {

	NSNumber* _faceKey;
	NSString* _serviceKey;
	NSString* _reference;
	ILMB_APERTURE_2012_HgRecentChange* _recentChange;

}
-(id)infoDictionaryPath;
-(void)setRecentChange:(id)arg1 ;
-(id)recentChange;
-(id)faceKey;
-(id)initInDatabase:(id)arg1 ;
-(void)cacheServiceKey:(id)arg1 ;
-(void)cacheReference:(id)arg1 ;
-(id)initWithiPhotoFaceExternal:(id)arg1 faceKey:(id)arg2 database:(id)arg3 ;
-(void)cacheFaceKey:(id)arg1 ;
-(id)serviceKey;
-(id)reference;
-(void)dealloc;
@end

