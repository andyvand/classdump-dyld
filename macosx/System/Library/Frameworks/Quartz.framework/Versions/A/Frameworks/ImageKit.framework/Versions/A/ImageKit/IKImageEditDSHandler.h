/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKImageEditPanel, CIImage, NSMutableArray;

@interface IKImageEditDSHandler : NSObject {

	id _dataSource;
	char _dataSourceIsIKImageView;
	IKImageEditPanel* _panel;
	CGImageRef _dataSourceImage;
	CIImage* _ciImage;
	NSMutableArray* _filterArray;

}

@property (assign) id dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) char dataSourceIsIKImageView;                //@synthesize dataSourceIsIKImageView=_dataSourceIsIKImageView - In the implementation block
@property (readonly) NSMutableArray * filterArray;              //@synthesize filterArray=_filterArray - In the implementation block
-(id)delegateForIKFilterChain;
-(NSMutableArray *)filterArray;
-(void)setFilterArray:(NSMutableArray *)arg1 ;
-(id)filter:(id)arg1 valueForKey:(id)arg2 ;
-(void)setDataSourceIsIKImageView:(char)arg1 ;
-(char)dataSourceIsIKImageView;
-(id)metaDataFromCGImageRef;
-(void)setSingleEffectFilterArray:(id)arg1 ;
-(void)filterAdded:(id)arg1 filterChain:(id)arg2 ;
-(void)updateFilter:(id)arg1 withParameters:(id)arg2 filterChain:(id)arg3 ;
-(void)filter:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 filterChain:(id)arg4 ;
-(void)filterRemoved:(id)arg1 filterChain:(id)arg2 ;
-(void)filterChainChanged:(id)arg1 ;
-(void)updateDataSourceImage:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
-(id)initWithPanel:(id)arg1 ;
-(void)cleanup;
@end

