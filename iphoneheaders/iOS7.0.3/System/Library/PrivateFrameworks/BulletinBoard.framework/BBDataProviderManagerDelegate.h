/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol BBDataProviderManagerDelegate <NSObject>
@required
-(id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2;
-(void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3;
-(void)dpManager:(id)arg1 addDataProviderFactory:(id)arg2 withSectionInfo:(id)arg3;
-(void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2;
@end
