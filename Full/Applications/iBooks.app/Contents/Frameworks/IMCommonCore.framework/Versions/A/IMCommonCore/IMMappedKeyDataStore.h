/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSString;

@interface IMMappedKeyDataStore : NSObject {

	NSObject*<OS_dispatch_queue> _keyQueue;
	NSObject*<OS_dispatch_queue> _loadQueue;
	NSObject*<OS_dispatch_queue> _saveQueue;
	NSMutableSet* _keys;
	NSString* _path;

}

@property (nonatomic,retain) NSString * path;              //@synthesize path=_path - In the implementation block
-(void)_fetchKeys;
-(void)_setData:(id)arg1 forKey:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)fetchDataForKey:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)fetchKeysPassingTest:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)removeDataForKeysPassingTest:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 queue:(id)arg3 ;
-(id)_dataForKey:(id)arg1 ;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
@end

