/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKLibraryPlatformDataSources.bundle/Contents/MacOS/BKLibraryPlatformDataSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKLibraryPlatformDataSources/BKLibraryPlatformDataSources-Structs.h>
#import <BKLibraryPlatformDataSources/BKAssetHelper.h>
#import <BKLibraryPlatformDataSources/IMPlugIn.h>

@class NSString;

@interface BKPDFAssetHelper : NSObject <BKAssetHelper, IMPlugIn> {

	int _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int state;                             //@synthesize state=_state - In the implementation block
-(id)initWithPlugInInstanceDescriptor:(id)arg1 ;
-(char)isThinnedAsset:(id)arg1 error:(id*)arg2 ;
-(char)canOpenAsset:(id)arg1 error:(id*)arg2 ;
-(id)coverImageForAsset:(id)arg1 size:(CGSize)arg2 error:(id*)arg3 ;
-(void)setState:(int)arg1 ;
-(int)state;
@end

