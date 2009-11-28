/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "DAMailAccountRequest.h"
#import <DataAccess/DAMailboxFetchMessageRequest.h>

@class DAMessageStore, MimePart, Message;
@protocol RequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory;

@interface DAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <DAMailAccountRequest> {
	int format;
	DAMessageStore* store;
	Message* message;
	id<DAMailAccountStreamConsumerFactory, RequestQueueResponseConsumer> consumer;
	MimePart* part;
	BOOL partial;
}
// in a protocol: -(double)generationTime;
// in a protocol: -(BOOL)shouldSend;
@end
