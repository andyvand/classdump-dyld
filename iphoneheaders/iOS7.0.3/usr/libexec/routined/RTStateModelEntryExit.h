/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:52:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@interface RTStateModelEntryExit : NSObject <NSSecureCoding> {

	double _entry_s;
	double _exit_s;

}

@property (assign,nonatomic) double entry_s;              //@synthesize entry_s=_entry_s - In the implementation block
@property (assign,nonatomic) double exit_s;               //@synthesize exit_s=_exit_s - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithEntry:(double)arg1 exit:(double)arg2 ;
-(double)exit_s;
-(double)entry_s;
-(void)setEntry_s:(double)arg1 ;
-(void)setExit_s:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
@end
