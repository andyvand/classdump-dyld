/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ACMAuthenticationResponse <NSObject>
@property (retain) NSString * token; 
@property (retain) NSError * error; 
@property (retain) NSString * userName; 
@required
-(id)userName;
-(void)setError:(id)arg1;
-(void)setUserName:(id)arg1;
-(id)token;
-(void)setToken:(id)arg1;
-(id)error;
@end
