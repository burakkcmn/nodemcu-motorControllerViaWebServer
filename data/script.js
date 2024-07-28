function controlMotor(action) {
    fetch(`/${action}`)
        .then(response => {
            if (response.ok) {
                updateButtonStates(action);
            }
        })
        .catch(error => {
            console.error('Error:', error);
        });
}

function updateButtonStates(activeButton) {
    const buttons = document.querySelectorAll('button');
    buttons.forEach(button => {
        button.classList.remove('active');
    });

    document.getElementById(activeButton).classList.add('active');
}
