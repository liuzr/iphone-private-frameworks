/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {
	NSArray* _components;
	NSData* _context;
}
-(BOOL)matchesUTF8String:(const char*)string;
-(BOOL)matches:(id)matches;
-(id)initWithSearchString:(id)searchString andLocale:(id)locale;
-(id)initWithSearchString:(id)searchString;
// inherited: -(void)dealloc;
@end
