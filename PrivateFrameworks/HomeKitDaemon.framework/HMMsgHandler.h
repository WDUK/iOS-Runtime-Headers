/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMMsgHandler : NSObject {
    id /* block */ _messageHandler;
    NSObject<OS_dispatch_queue> *_receiverQueue;
    NSNumber *_token;
}

@property (nonatomic, copy) id /* block */ messageHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *receiverQueue;
@property (nonatomic, retain) NSNumber *token;

+ (id)msgHandler:(id /* block */)arg1 token:(id)arg2 receiverQueue:(id)arg3;

- (void).cxx_destruct;
- (id)initWithMessageHandler:(id /* block */)arg1 token:(id)arg2 receiverQueue:(id)arg3;
- (id /* block */)messageHandler;
- (id)receiverQueue;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)setReceiverQueue:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end