/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSWPLayoutTarget;
@class TSWPColumn, TSDLayout, NSMutableArray, NSArray;

@interface THTextWrapCookie : NSObject {

	TSWPColumn* _column;
	TSDLayout*<TSWPLayoutTarget> _target;
	NSMutableArray* _floatingWrappables;

}

@property (nonatomic,retain) TSWPColumn * column;                                //@synthesize column=_column - In the implementation block
@property (assign,nonatomic) TSDLayout*<TSWPLayoutTarget> target;                //@synthesize target=_target - In the implementation block
@property (nonatomic,retain,readonly) NSArray * floatingWrappables;              //@synthesize floatingWrappables=_floatingWrappables - In the implementation block
-(NSArray *)floatingWrappables;
-(void)addFloatingWrappable:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setTarget:(TSDLayout*<TSWPLayoutTarget>)arg1 ;
-(TSWPColumn *)column;
-(TSDLayout*<TSWPLayoutTarget>)target;
-(void)setColumn:(TSWPColumn *)arg1 ;
@end

