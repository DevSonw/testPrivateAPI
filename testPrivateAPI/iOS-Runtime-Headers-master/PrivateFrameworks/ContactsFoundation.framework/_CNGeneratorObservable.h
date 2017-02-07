/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNGeneratorObservable : CNObservable {
    CNCancelationToken * _cancelable;
    id /* block */  _condition;
    id /* block */  _delay;
    id /* block */  _nextState;
    id /* block */  _resultSelector;
    <CNScheduler> * _scheduler;
    id  _state;
}

- (void).cxx_destruct;
- (id)initWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4 delay:(id /* block */)arg5 scheduler:(id)arg6;
- (BOOL)isFinished;
- (void)scheduleNextResultForObserver:(id)arg1;
- (void)sendCurrentStateToObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (void)updateState;

@end
