/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/MacOS/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKAsset;
@interface BKAssetClosingNotifier : NSObject {

	id<BKAsset> _asset;
	/*^block*/id _completion;

}

@property (nonatomic,retain) id<BKAsset> asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id completion;                    //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setAsset:(id<BKAsset>)arg1 ;
-(id<BKAsset>)asset;
-(void)setCompletion:(id)arg1 ;
-(void)dealloc;
@end

