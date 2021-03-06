/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString, NSError;

@interface CalFTPOperation : NSObject {

	NSURL* _url;
	NSString* _user;
	NSString* _password;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	NSError* _error;
	char _isCancelled;
	char _isFinished;

}

@property (nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * user;                  //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSString * password;              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) id progressBlock;                   //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                 //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) char isCancelled;                 //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) char isFinished;                  //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) NSError * error;                  //@synthesize error=_error - In the implementation block
-(NSString *)password;
-(NSString *)user;
-(id)init;
-(void)dealloc;
-(void)start;
-(id)description;
-(void)cancel;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(char)isCancelled;
-(char)isFinished;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(void)setPassword:(NSString *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(void)setIsCancelled:(char)arg1 ;
-(void)setIsFinished:(char)arg1 ;
-(id)progressBlock;
@end

