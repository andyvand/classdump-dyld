/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/BKAssetHelper.h>
#import <iBAReaderKit/IMPlugIn.h>

@class IMAssetViewerPlugInInstanceDescriptor, NSString;

@interface THBKAssetHelper : NSObject <BKAssetHelper, IMPlugIn> {

	IMAssetViewerPlugInInstanceDescriptor* _pluginDescriptor;
	int _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int state;                             //@synthesize state=_state - In the implementation block
+(void)initialize;
-(id)initWithPlugInInstanceDescriptor:(id)arg1 ;
-(char)isThinnedAsset:(id)arg1 error:(id*)arg2 ;
-(char)acknowledgeAnnotationProvider:(id)arg1 willMergeAnnotationsWithAssertVersionMismatch:(id)arg2 asset:(id)arg3 ;
-(char)canOpenAsset:(id)arg1 error:(id*)arg2 ;
-(id)coverImageForAsset:(id)arg1 size:(CGSize)arg2 error:(id*)arg3 ;
-(void)p_pluginTeardown;
-(void)teardown;
-(id)init;
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(int)state;
@end
