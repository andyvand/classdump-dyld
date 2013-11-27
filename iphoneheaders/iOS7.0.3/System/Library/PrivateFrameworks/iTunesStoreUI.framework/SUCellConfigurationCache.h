/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface SUCellConfigurationCache : NSObject {

	id _cellContext;
	NSMutableArray* _configurations;

}

@property (nonatomic,retain) id cellContext;              //@synthesize cellContext=_cellContext - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)resetLayoutCaches;
-(id)configurationForRow:(unsigned)arg1 ;
-(id)cellContext;
-(void)setCellContext:(id)arg1 ;
-(id)initWithClass:(Class)arg1 tableHeight:(float)arg2 ;
@end
